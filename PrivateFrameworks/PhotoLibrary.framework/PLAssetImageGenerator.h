/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject  {
    bool_inUse;
    AVAssetImageGenerator *_imageGenerator;
}

@property(retain) AVAssetImageGenerator * imageGenerator;
@property bool inUse;


- (bool)inUse;
- (id)imageGenerator;
- (void)setImageGenerator:(id)arg1;
- (void)setInUse:(bool)arg1;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;

@end