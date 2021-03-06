//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRRecordedCorrection : NSObject
{
    NSTextCheckingResult *_correctionResult;
    NSString *_correctedString;
    BOOL _hasRecordedResponse;
}

@property BOOL hasRecordedResponse; // @synthesize hasRecordedResponse=_hasRecordedResponse;
- (id)correctedString;
- (id)correctionResult;
- (id)description;
- (void)dealloc;
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;

@end

