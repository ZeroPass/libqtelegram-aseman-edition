// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputprivacykeyobject.h"

InputPrivacyKeyObject::InputPrivacyKeyObject(const InputPrivacyKey &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

InputPrivacyKeyObject::InputPrivacyKeyObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

InputPrivacyKeyObject::~InputPrivacyKeyObject() {
}

InputPrivacyKeyObject &InputPrivacyKeyObject::operator =(const InputPrivacyKey &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool InputPrivacyKeyObject::operator ==(const InputPrivacyKey &b) const {
    return m_core == b;
}

void InputPrivacyKeyObject::setClassType(int classType) {
    InputPrivacyKey::InputPrivacyKeyType result;
    switch(classType) {
    case TypeInputPrivacyKeyStatusTimestamp:
        result = InputPrivacyKey::typeInputPrivacyKeyStatusTimestamp;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int InputPrivacyKeyObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputPrivacyKey::typeInputPrivacyKeyStatusTimestamp:
        result = TypeInputPrivacyKeyStatusTimestamp;
        break;
    }

    return result;
}

void InputPrivacyKeyObject::setCore(const InputPrivacyKey &core) {
    operator =(core);
}

InputPrivacyKey InputPrivacyKeyObject::core() const {
    return m_core;
}
