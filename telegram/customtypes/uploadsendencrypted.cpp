// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "uploadsendencrypted.h"
#include "../coretypes.h"

UploadSendEncrypted::UploadSendEncrypted(UploadSendEncryptedType classType) :
    m_partId(0),
    m_totalSize(0),
    m_uploaded(0),
    m_classType(classType)
{
}

UploadSendEncrypted::UploadSendEncrypted(const Null &null) :
    TelegramCustomTypeObject(null),
    m_partId(0),
    m_totalSize(0),
    m_uploaded(0),
    m_classType(typeUploadSendEncryptedEmpty)
{
}

UploadSendEncrypted::~UploadSendEncrypted() {
}

void UploadSendEncrypted::setMessage(const MessagesSentEncryptedMessage &message) {
    m_message = message;
}

MessagesSentEncryptedMessage UploadSendEncrypted::message() const {
    return m_message;
}

void UploadSendEncrypted::setPartId(qint32 partId) {
    m_partId = partId;
}

qint32 UploadSendEncrypted::partId() const {
    return m_partId;
}

void UploadSendEncrypted::setTotalSize(qint32 totalSize) {
    m_totalSize = totalSize;
}

qint32 UploadSendEncrypted::totalSize() const {
    return m_totalSize;
}

void UploadSendEncrypted::setUploaded(qint32 uploaded) {
    m_uploaded = uploaded;
}

qint32 UploadSendEncrypted::uploaded() const {
    return m_uploaded;
}

bool UploadSendEncrypted::operator ==(const UploadSendEncrypted &b) const {
    return m_classType == b.m_classType &&
           m_message == b.m_message &&
           m_partId == b.m_partId &&
           m_totalSize == b.m_totalSize &&
           m_uploaded == b.m_uploaded;
}

void UploadSendEncrypted::setClassType(UploadSendEncrypted::UploadSendEncryptedType classType) {
    m_classType = classType;
}

UploadSendEncrypted::UploadSendEncryptedType UploadSendEncrypted::classType() const {
    return m_classType;
}

