// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE
#define LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include "encryptedfile.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesSentEncryptedMessage : public TelegramTypeObject
{
public:
    enum MessagesSentEncryptedMessageType {
        typeMessagesSentEncryptedMessage = 0x560f8935,
        typeMessagesSentEncryptedFile = 0x9493ff32
    };

    MessagesSentEncryptedMessage(MessagesSentEncryptedMessageType classType = typeMessagesSentEncryptedMessage, InboundPkt *in = 0);
    MessagesSentEncryptedMessage(InboundPkt *in);
    MessagesSentEncryptedMessage(const Null&);
    virtual ~MessagesSentEncryptedMessage();

    void setDate(qint32 date);
    qint32 date() const;

    void setFile(const EncryptedFile &file);
    EncryptedFile file() const;

    void setClassType(MessagesSentEncryptedMessageType classType);
    MessagesSentEncryptedMessageType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesSentEncryptedMessage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_date;
    EncryptedFile m_file;
    MessagesSentEncryptedMessageType m_classType;
};

Q_DECLARE_METATYPE(MessagesSentEncryptedMessage)

#endif // LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE