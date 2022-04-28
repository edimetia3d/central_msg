
#ifndef CENTRAL_MSG__MSG_H
#define CENTRAL_MSG__MSG_H
enum class MsgID {
#define MSG(ID, LEVEL, TEXT) ID,
#include "msg.def"
  _NUMBER_OF_MSGS,
};

static inline int GetMsgNum() {
  return static_cast<int>(MsgID::_NUMBER_OF_MSGS);
}

const char *GetMsgTitle(MsgID id);
int GetMsgLevel(MsgID id);
const char *GetMsgText(MsgID id);

static inline const char *GetMsgTitle(int id) {
  return GetMsgTitle(static_cast<MsgID>(id));
}
static inline int GetMsgLevel(int id) {
  return GetMsgLevel(static_cast<MsgID>(id));
}
static inline const char *GetMsgText(int id) {
  return GetMsgText(static_cast<MsgID>(id));
}

#endif//CENTRAL_MSG__MSG_H
