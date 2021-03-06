//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)popRawFrame;
- (void)reset;
- (void)_readFrameHeaderIfPossible;
- (void)pushFrameData:(id)arg1;
- (unsigned long long)bytesNeededForCurrentFrame;
- (BOOL)hasPartialData;
- (BOOL)hasCompleteFrame;
- (BOOL)hasFailed;
- (id)init;

@end

