#ifndef OTHER_H
#define OTHER_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFileDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QLabel>

#include <QPixmap>
#include <QListWidgetItem>
#include <QFontDatabase>
#include <QFont>
#include <QIcon>

#include <QtCore/QObject>
#include <QtCore/QEventLoop>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDir>
#include <QMediaPlayer>
#include <QAudioOutput>

#include <QProcess>
#include <QDesktopServices>

typedef struct SONG_INFO
{
    int MusicPlatform;
    QString Song_Name;
    QString Singer_Name;

    QString Id;
    QString Hash;
    QString Album_id;
    QString Album_audio_id;
}Song_Info;

typedef struct SONG_LIST_INFO
{
    QString List_Name;
    QString List_Image;
    QString Id;
}Song_List_Info;

class Other : public QObject
{
    Q_OBJECT

public:
    static QByteArray GetUrlData(QString Url);

    static QPixmap UrlToPixmap(QString Url);
};

#endif // OTHER_H
