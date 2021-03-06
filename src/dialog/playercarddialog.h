#ifndef PLAYERCARDDIALOG_H
#define PLAYERCARDDIALOG_H

#include "clientplayer.h"

#include <QDialog>
#include <QMap>

class PlayerCardDialog : public QDialog{
    Q_OBJECT

public:
    explicit PlayerCardDialog(const ClientPlayer *player, const QString &flags = "hej");

private:
    QWidget *createAvatar();
    QWidget *createHandcardButton();
    QWidget *createEquipArea();
    QWidget *createJudgingArea();

    const ClientPlayer *player;
signals:
    void idSelected(int card_id);
};

#endif // PLAYERCARDDIALOG_H
