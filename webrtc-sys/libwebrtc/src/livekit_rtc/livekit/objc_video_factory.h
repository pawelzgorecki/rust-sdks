#ifndef LIVEKIT_OBJC_VIDEO_FACTORY_H
#define LIVEKIT_OBJC_VIDEO_FACTORY_H

#include <memory>

#include "api/video_codecs/video_decoder_factory.h"
#include "api/video_codecs/video_encoder_factory.h"

namespace livekit {

std::unique_ptr<webrtc::VideoEncoderFactory> CreateObjCVideoEncoderFactory();
std::unique_ptr<webrtc::VideoDecoderFactory> CreateObjCVideoDecoderFactory();

}  // namespace livekit

#endif  // LIVEKIT_OBJC_VIDEO_FACTORY_H
