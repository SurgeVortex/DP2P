#include "file.h"

File::File()
{
    this->fileName = new QFileInfo();
}

File::File (QFileInfo fileName)
{
    setFile (fileName);
}

File::File (QString absoluteFilePath)
{
    setFile (absoluteFilePath);
}

void File::setFile (QFileInfo fileName)
{
    this->fileName = new QFileInfo(fileName);
    this->hashFile();
}

void File::setFile (QString absoluteFilePath)
{
    this->fileName = new QFileInfo(absoluteFilePath);
    this->hashFile();
}

void File::hashFile()
{
    this->hashCode = QCryptographicHash::hash(getData(), QCryptographicHash::Sha1);
}

QString File::getAbsoluteFilePath ()
{
    return this->fileName->absoluteFilePath();
}

QString File::getAbsolutePath ()
{
    return this->fileName->absolutePath();
}

QString File::getFileName ()
{
    return this->fileName->fileName();
}

QString File::getFileSize ()
{
    return QString::number(this->fileName->size());
}

QString File::getDateCreated ()
{
    QDateTime temp = fileName->created();
    QDateTime::
    return "not yet implemented";
}

QByteArray File::getData()
{
    QFile file(fileName->absoluteFilePath());
    return QByteArray(&file);
}

File::~File ()
{

}
