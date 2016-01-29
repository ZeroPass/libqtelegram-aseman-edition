// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_USERFULL
#define LQTG_TYPE_USERFULL

#include "telegramtypeobject.h"

#include <QMetaType>
#include "botinfo.h"
#include "contactslink.h"
#include "peernotifysettings.h"
#include "photo.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT UserFull : public TelegramTypeObject
{
public:
    enum UserFullType {
        typeUserFull = 0x5a89ac5b
    };

    UserFull(UserFullType classType = typeUserFull, InboundPkt *in = 0);
    UserFull(InboundPkt *in);
    UserFull(const Null&);
    virtual ~UserFull();

    void setBlocked(bool blocked);
    bool blocked() const;

    void setBotInfo(const BotInfo &botInfo);
    BotInfo botInfo() const;

    void setLink(const ContactsLink &link);
    ContactsLink link() const;

    void setNotifySettings(const PeerNotifySettings &notifySettings);
    PeerNotifySettings notifySettings() const;

    void setProfilePhoto(const Photo &profilePhoto);
    Photo profilePhoto() const;

    void setUser(const User &user);
    User user() const;

    void setClassType(UserFullType classType);
    UserFullType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const UserFull &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    bool m_blocked;
    BotInfo m_botInfo;
    ContactsLink m_link;
    PeerNotifySettings m_notifySettings;
    Photo m_profilePhoto;
    User m_user;
    UserFullType m_classType;
};

Q_DECLARE_METATYPE(UserFull)

#endif // LQTG_TYPE_USERFULL