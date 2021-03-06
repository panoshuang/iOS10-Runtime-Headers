/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (nonatomic, readonly) double power;
@property (nonatomic, readonly) NSNumber *rootNodeID;

+ (void)load;
+ (double)minPowerDifference;
+ (double)minPowerPercentageDifference;

- (id)initWithRootNodeID:(id)arg1 withPower:(double)arg2 withRange:(id)arg3;
- (int)instanceDirectionality;
- (bool)isEmptyEvent;
- (bool)isEqualContentsWithEvent:(id)arg1;
- (double)power;
- (id)rootNodeID;
- (id)subEntryKey;

@end
