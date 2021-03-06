/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDSERemoved : NSObject <NFAWDEventProtocol> {
    AWDNFCSERemovedEvent * _metric;
    unsigned int  _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCSERemovedEvent *metric;
@property (nonatomic) unsigned int reason;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (unsigned int)reason;
- (void)setMetric:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
