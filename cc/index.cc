#include <node.h>
#include "core/Mat.h"
#include "KeyPointMatch.h"
#include "modules/io.h"
#include "modules/features2d.h"
#include "modules/photo.h"
#include "modules/sfm/sfm.h"

void init(v8::Local<v8::Object> target) {
  Mat::Init(target);
  KeyPoint::Init(target);
  KeyPointMatch::Init(target);
  Io::Init(target);
  Features2d::Init(target);
  Photo::Init(target);
  Sfm::Init(target);

};

NODE_MODULE(tutorial, init)