//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BOUILogger-Protocol.h"

@interface FSApp.EventLogger.(BOUILogger in _39F1C94BED2C65745549E0FE433B3151) : NSObject <BOUILogger>
{
}

- (id)init;
- (void)logActivationFailure:(unsigned long long)arg1 withMethod:(unsigned long long)arg2 code:(long long)arg3;
- (void)logActivationSuccess:(unsigned long long)arg1;
- (void)logTrialStartWithTrialType:(unsigned long long)arg1;
- (void)logSignUpWithStatusCode:(unsigned long long)arg1;
- (void)logLoginOfType:(unsigned long long)arg1 withStatusCode:(long long)arg2;

@end

