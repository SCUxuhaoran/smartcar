// -------------------------------------------------------------------------------------------------------------------
//
//  File: ViewSettingsWidget.h
//
//  Copyright 2016 (c) Decawave Ltd, Dublin, Ireland.
//
//  All rights reserved.
//
//  Author:
//
// -------------------------------------------------------------------------------------------------------------------

#ifndef VIEWSETTINGSWIDGET_H
#define VIEWSETTINGSWIDGET_H

#include <QWidget>
// #include <QNetworkAccessManager>
// #include <QNetworkRequest>
// #include <QNetworkReply>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class ViewSettingsWidget;
}

class ViewSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ViewSettingsWidget(QWidget *parent = 0);
    ~ViewSettingsWidget();

    int applyFloorPlanPic(const QString &path);

    // QNetworkAccessManager *manager;
    // QNetworkRequest *request;
    // QNetworkReply *reply;

signals:
    void saveViewSettings(void);

protected slots:
    void onReady();

    void floorplanOpenClicked();
    void updateLocationFilter(int index);
    void enableFiltering(void);
    void originClicked();
    void scaleClicked();

    void gridShowClicked();
    void originShowClicked();
    void tagHistoryShowClicked();

    void saveFPClicked();
    void tagAncTableShowClicked();
    void useAutoPosClicked();
    void showGeoFencingModeClicked();
    void showNavigationModeClicked();
    void alarmSetClicked();

    void zone1ValueChanged(double);
    void zone2ValueChanged(double);
    void zone1EditFinished(void);
    void zone2EditFinished(void);
    void tagHistoryNumberValueChanged(int);

    void showOriginGrid(bool orig, bool grid);
    void getFloorPlanPic(void);
    void showSave(bool);

    void setTagHistory(int h);
    void loggingClicked(void);
private slots:
    void on_logging_pb_clicked();

    void on_ButtonConnect_clicked();

    void on_ButtonSpeedUp_clicked();

    void on_ButtonSpeedDown_clicked();

    void on_ButtonUp_pressed();

    void on_ButtonUp_released();

    void on_ButtonDown_pressed();

    void on_ButtonDown_released();

    void on_ButtonLeft_pressed();

    void on_ButtonLeft_released();

    void on_ButtonRight_pressed();

    void on_ButtonRight_released();

    void on_ButtonLeftForward_pressed();

    void on_ButtonLeftForward_released();

    void on_ButtonRightForward_pressed();

    void on_ButtonRightForward_released();

    void on_ButtonMiddle_clicked();

    void on_ButtonMiddle_pressed();

    void on_ButtonMiddle_released();

private:
    Ui::ViewSettingsWidget *ui;

    QTcpSocket *tcpSocket;

    bool _logging ;
    bool _floorplanOpen ;
};

#endif // VIEWSETTINGSWIDGET_H
