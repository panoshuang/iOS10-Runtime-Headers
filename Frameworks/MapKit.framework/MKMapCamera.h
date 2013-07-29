/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
    double _heading;
    float _pitch;
    double _altitude;
    MKMapView *_mapView;
}

@property struct { double x1; double x2; } centerCoordinate;
@property double heading;
@property float pitch;
@property double altitude;

+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 aspectRatio:(float)arg2;
+ (id)cameraLookingAtCenterCoordinate:(struct { double x1; double x2; })arg1 fromEyeCoordinate:(struct { double x1; double x2; })arg2 eyeAltitude:(double)arg3;
+ (id)camera;
+ (BOOL)supportsSecureCoding;

- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_enclosingGEOMapRectForAspectRatio:(float)arg1;
- (BOOL)_validate;
- (id)_mapView;
- (void)_setMapView:(id)arg1;
- (void)setHeading:(double)arg1;
- (void)setAltitude:(double)arg1;
- (double)heading;
- (void)setPitch:(float)arg1;
- (float)pitch;
- (double)altitude;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_updateState;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end