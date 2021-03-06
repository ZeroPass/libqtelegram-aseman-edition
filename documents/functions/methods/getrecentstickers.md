# Messages.getRecentStickers

## Function:

TelegramCore::messagesGetRecentStickers

## Schema:

```c++
messages.getRecentStickers#5ea192c9 flags:# attached:flags.0?true hash:int = messages.RecentStickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|attached|bool||
|hash|qint32||
|callBack|Callback&lt;[MessagesRecentStickers](../../types/messagesrecentstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesRecentStickers](../../types/messagesrecentstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getRecentStickersAnswer(qint64 msgId, const MessagesRecentStickers & result)
```
```c++
getRecentStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetRecentStickersAnswer(qint64 msgId, const MessagesRecentStickers & result)
```
```c++
onGetRecentStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_RECENT_STICKERS_CALLBACK

## Examples:

```c++
tg->getRecentStickers(attached, hash, [=](TG_GET_RECENT_STICKERS_CALLBACK){
    ...
}, 30000);
```
