
#include "msg.h"

int GetMsgLevel(MsgID id) {
  static const int msg_level[] = {
#define MSG(ID, LEVEL, TEXT) LEVEL,
#include "msg.def"
      -1,// use -1 as a sentinel
  };
  return msg_level[static_cast<int>(id)];
}

const char *GetMsgTitle(MsgID id) {
  static const char *msg_title[] = {
#define MSG(ID, LEVEL, TEXT) #ID,
#include "msg.def"
      nullptr,// use nullptr as a sentinel
  };
  return msg_title[static_cast<int>(id)];
}

const char *GetMsgText(MsgID id) {
  static const char *msg_text[] = {
#define MSG(ID, LEVEL, TEXT) TEXT,
#include "msg.def"
      nullptr,// use nullptr as a sentinel
  };
  return msg_text[static_cast<int>(id)];
}