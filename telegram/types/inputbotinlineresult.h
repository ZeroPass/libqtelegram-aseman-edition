// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTBOTINLINERESULT
#define LQTG_TYPE_INPUTBOTINLINERESULT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QtGlobal>
#include "inputbotinlinemessage.h"

class LIBQTELEGRAMSHARED_EXPORT InputBotInlineResult : public TelegramTypeObject
{
public:
    enum InputBotInlineResultType {
        typeInputBotInlineResult = 0x2cbbe15a
    };

    InputBotInlineResult(InputBotInlineResultType classType = typeInputBotInlineResult, InboundPkt *in = 0);
    InputBotInlineResult(InboundPkt *in);
    InputBotInlineResult(const Null&);
    virtual ~InputBotInlineResult();

    void setContentType(const QString &contentType);
    QString contentType() const;

    void setContentUrl(const QString &contentUrl);
    QString contentUrl() const;

    void setDescription(const QString &description);
    QString description() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setH(qint32 h);
    qint32 h() const;

    void setId(const QString &id);
    QString id() const;

    void setSendMessage(const InputBotInlineMessage &sendMessage);
    InputBotInlineMessage sendMessage() const;

    void setThumbUrl(const QString &thumbUrl);
    QString thumbUrl() const;

    void setTitle(const QString &title);
    QString title() const;

    void setType(const QString &type);
    QString type() const;

    void setUrl(const QString &url);
    QString url() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(InputBotInlineResultType classType);
    InputBotInlineResultType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputBotInlineResult &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_contentType;
    QString m_contentUrl;
    QString m_description;
    qint32 m_duration;
    qint32 m_flags;
    qint32 m_h;
    QString m_id;
    InputBotInlineMessage m_sendMessage;
    QString m_thumbUrl;
    QString m_title;
    QString m_type;
    QString m_url;
    qint32 m_w;
    InputBotInlineResultType m_classType;
};

Q_DECLARE_METATYPE(InputBotInlineResult)

#endif // LQTG_TYPE_INPUTBOTINLINERESULT