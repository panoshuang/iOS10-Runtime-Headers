/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer * _audioPlayer;
    id /* block */  _block;
    <CKAudioPlayerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    CKMediaObject * _mediaObject;
    double  _prevCurrentTime;
}

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) double prevCurrentTime;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)audioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id /* block */)block;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (double)duration;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1;
- (bool)isPlaying;
- (id)mediaObject;
- (void)pause;
- (void)playAfterDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)prepareToPlay;
- (double)prevCurrentTime;
- (void)setAudioPlayer:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setPrevCurrentTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)stop;
- (float)volume;

@end