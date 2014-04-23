#ifndef FILE_H
#define FILE_H

#include <QFileInfo>
#include <QCryptographicHash>
#include <QByteArray>
#include <QFile>
#include <QString>
#include <QDir>
#include <QDateTime>

class File
{
public:
    File();
    File(QFileInfo fileName);
    File(QString absoluteFilePath);

    ~File();

    void setFile (QString absoluteFilePath);
    void setFile (QFileInfo fileName);
    void hashFile();

    QString getFileSize();
    QString getFileName();
    QString getAbsoluteFilePath();
    QString getAbsolutePath();
    QString getDateCreated();
    QByteArray getData();
private:
    QFileInfo * fileName;
    QByteArray hashCode;
};

#endif // FILE_H
