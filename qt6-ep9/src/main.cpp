#include <QCoreApplication>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  // Creating
  QString line("Hello world");
  qInfo() << line;

  QString name;
  name = "Scott Choo";
  qInfo() << name;

  int pos = 504;
  int max = 7439;
  QString status = QString("Processing file %1 of %2").arg(pos).arg(max);
  qInfo() << status;

  // Reading each char
  for(int i = 0; i < line.length(); i++) {
	QChar c = line.at(i);
	qInfo() << c;
  }

  // Comparing and searching
  qInfo() << "Compare" << line.compare("hello", Qt::CaseSensitivity::CaseSensitive);
  qInfo() << "Starts" << line.startsWith("hello", Qt::CaseInsensitive);
  qInfo() << "Ends" << line.endsWith("world", Qt::CaseInsensitive);
  qInfo() << "Contains" << line.contains("world");
  qInfo() << "Index" << line.indexOf("world");

  // Modifying and parsing
  line.append("\r\n How are you?");
  line.append("Today Scott said \"Hello wife\" how are you?");
  qInfo() << "Escape" << line;

  return QCoreApplication::exec();
}