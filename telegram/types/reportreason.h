// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_REPORTREASON
#define LQTG_TYPE_REPORTREASON

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>

class LIBQTELEGRAMSHARED_EXPORT ReportReason : public TelegramTypeObject
{
public:
    enum ReportReasonClassType {
        typeInputReportReasonSpam = 0x58dbcab8,
        typeInputReportReasonViolence = 0x1e22c78d,
        typeInputReportReasonPornography = 0x2e59d922,
        typeInputReportReasonOther = 0xe1746d0a
    };

    ReportReason(ReportReasonClassType classType = typeInputReportReasonSpam, InboundPkt *in = 0);
    ReportReason(InboundPkt *in);
    ReportReason(const Null&);
    virtual ~ReportReason();

    void setText(const QString &text);
    QString text() const;

    void setClassType(ReportReasonClassType classType);
    ReportReasonClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ReportReason fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const ReportReason &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_text;
    ReportReasonClassType m_classType;
};

Q_DECLARE_METATYPE(ReportReason)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ReportReason &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ReportReason &item);

inline ReportReason::ReportReason(ReportReasonClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline ReportReason::ReportReason(InboundPkt *in) :
    m_classType(typeInputReportReasonSpam)
{
    fetch(in);
}

inline ReportReason::ReportReason(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputReportReasonSpam)
{
}

inline ReportReason::~ReportReason() {
}

inline void ReportReason::setText(const QString &text) {
    m_text = text;
}

inline QString ReportReason::text() const {
    return m_text;
}

inline bool ReportReason::operator ==(const ReportReason &b) const {
    return m_classType == b.m_classType &&
           m_text == b.m_text;
}

inline void ReportReason::setClassType(ReportReason::ReportReasonClassType classType) {
    m_classType = classType;
}

inline ReportReason::ReportReasonClassType ReportReason::classType() const {
    return m_classType;
}

inline bool ReportReason::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputReportReasonSpam: {
        m_classType = static_cast<ReportReasonClassType>(x);
        return true;
    }
        break;
    
    case typeInputReportReasonViolence: {
        m_classType = static_cast<ReportReasonClassType>(x);
        return true;
    }
        break;
    
    case typeInputReportReasonPornography: {
        m_classType = static_cast<ReportReasonClassType>(x);
        return true;
    }
        break;
    
    case typeInputReportReasonOther: {
        m_text = in->fetchQString();
        m_classType = static_cast<ReportReasonClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool ReportReason::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputReportReasonSpam: {
        return true;
    }
        break;
    
    case typeInputReportReasonViolence: {
        return true;
    }
        break;
    
    case typeInputReportReasonPornography: {
        return true;
    }
        break;
    
    case typeInputReportReasonOther: {
        out->appendQString(m_text);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> ReportReason::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputReportReasonSpam: {
        result["classType"] = "ReportReason::typeInputReportReasonSpam";
        return result;
    }
        break;
    
    case typeInputReportReasonViolence: {
        result["classType"] = "ReportReason::typeInputReportReasonViolence";
        return result;
    }
        break;
    
    case typeInputReportReasonPornography: {
        result["classType"] = "ReportReason::typeInputReportReasonPornography";
        return result;
    }
        break;
    
    case typeInputReportReasonOther: {
        result["classType"] = "ReportReason::typeInputReportReasonOther";
        result["text"] = QVariant::fromValue<QString>(text());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline ReportReason ReportReason::fromMap(const QMap<QString, QVariant> &map) {
    ReportReason result;
    if(map.value("classType").toString() == "ReportReason::typeInputReportReasonSpam") {
        result.setClassType(typeInputReportReasonSpam);
        return result;
    }
    if(map.value("classType").toString() == "ReportReason::typeInputReportReasonViolence") {
        result.setClassType(typeInputReportReasonViolence);
        return result;
    }
    if(map.value("classType").toString() == "ReportReason::typeInputReportReasonPornography") {
        result.setClassType(typeInputReportReasonPornography);
        return result;
    }
    if(map.value("classType").toString() == "ReportReason::typeInputReportReasonOther") {
        result.setClassType(typeInputReportReasonOther);
        result.setText( map.value("text").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray ReportReason::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const ReportReason &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ReportReason::typeInputReportReasonSpam:
        
        break;
    case ReportReason::typeInputReportReasonViolence:
        
        break;
    case ReportReason::typeInputReportReasonPornography:
        
        break;
    case ReportReason::typeInputReportReasonOther:
        stream << item.text();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, ReportReason &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ReportReason::ReportReasonClassType>(type));
    switch(type) {
    case ReportReason::typeInputReportReasonSpam: {
        
    }
        break;
    case ReportReason::typeInputReportReasonViolence: {
        
    }
        break;
    case ReportReason::typeInputReportReasonPornography: {
        
    }
        break;
    case ReportReason::typeInputReportReasonOther: {
        QString m_text;
        stream >> m_text;
        item.setText(m_text);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_REPORTREASON