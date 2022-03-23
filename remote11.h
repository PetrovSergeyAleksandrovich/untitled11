#include <QMainWindow>
#include <QDebug>
#include "./ui_remote11.h"

class RemoteMainWindow: public QMainWindow
{
    Q_OBJECT
public:

    int channel = 0;
    int volume = 0;

    Ui::MainWindow* remote = nullptr;

    RemoteMainWindow(Ui::MainWindow* inRemote, QWidget* parent = nullptr): remote(inRemote), QMainWindow(parent){}

public:
    void print_info(int inChannel, int inVolume)
    {
        remote->screen->setText(QString("Channel %1 \r\nVolume %2").arg(inChannel).arg(inVolume));
    }

public slots:
    void up_volume()
    {
        if(volume == 100)
        {
            print_info(channel, volume);
            return;
        }
        volume += 10;
        print_info(channel, volume);
    };

    void down_volume()
    {
        if(volume == 0)
        {
            print_info(channel, volume);
            return;
        }
        volume -= 10;
        print_info(channel, volume);
    };

    void up_ch()
    {
        if(channel == 9)
        {
            print_info(channel, volume);
            return;
        }
        channel++;
        print_info(channel, volume);
    }

    void down_ch()
    {
        if(channel == 0)
        {
            print_info(channel, volume);
            return;
        }
        channel--;
        print_info(channel, volume);
    }

    void set_0()
    {
        channel = remote->btn_0->text().toInt();
        print_info(channel, volume);
    }

    void set_1()
    {
        channel = remote->btn_1->text().toInt();
        print_info(channel, volume);
    }

    void set_2()
    {
        channel = remote->btn_2->text().toInt();
        print_info(channel, volume);
    }

    void set_3()
    {
        channel = remote->btn_1->text().toInt();
        print_info(channel, volume);
    }

    void set_4()
    {
        channel = remote->btn_4->text().toInt();
        print_info(channel, volume);
    }

    void set_5()
    {
        channel = remote->btn_5->text().toInt();
        print_info(channel, volume);
    }

    void set_6()
    {
        channel = remote->btn_6->text().toInt();
        print_info(channel, volume);
    }

    void set_7()
    {
        channel = remote->btn_7->text().toInt();
        print_info(channel, volume);
    }

    void set_8()
    {
        channel = remote->btn_8->text().toInt();
        print_info(channel, volume);
    }

    void set_9()
    {
        channel = remote->btn_9->text().toInt();
        print_info(channel, volume);
    }

};
