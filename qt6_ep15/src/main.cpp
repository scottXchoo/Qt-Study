#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>

#include "include/kitten.h"

void myMessageOutPut(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
  QByteArray localMsg = msg.toLocal8Bit();
  const char *file = context.file ? context.file : "";
  const char *function = context.function ? context.function : "";

  switch (type) {
	case QtDebugMsg:
	  fprintf(stderr, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	  break;
	case QtInfoMsg:
	  fprintf(stderr, "Info: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	  break;
	case QtWarningMsg:
	  fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	  break;
	case QtCriticalMsg:
	  fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	  break;
	case QtFatalMsg: fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	  break;
  }
}

void test() {
  qDebug() << "test";
  qInfo() << "test";
  qWarning() << "test";
  qCritical() << "test";
  qFatal("fatal message ");

  Kitten kitty;
  kitty.meow();
}

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  // Setup
  QTextStream qin(stdin);
  std::cout << "Starting" << std::endl;

  bool running = true;
  do {
	std::cout << "Enter a command (start, stop, test, or exit): " << std::endl;
	QString command = qin.readLine();
	qInfo() << "You entered: " << command;

	// Install
	if(command.toUpper() == "START") qInstallMessageHandler(myMessageOutPut);

	// Uninstall
	if(command.toUpper() == "STOP") qInstallMessageHandler(0);

	// Test
	if(command.toUpper() == "TEST") test();

	// Exit the loop
	if(command.toUpper() == "EXIT") running = false;

  } while (running);

  std::cout << "Finished" << std::endl;

  return QCoreApplication::exec();
}
