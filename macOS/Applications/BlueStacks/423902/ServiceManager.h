//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ServiceManager : NSObject
{
    int _ourServicePid;
}

+ (id)sharedManager;
@property int ourServicePid; // @synthesize ourServicePid=_ourServicePid;
- (BOOL)stopServiceSync;
- (void)stopServiceAsync:(CDUnknownBlockType)arg1;
- (void)runningServicePid:(CDUnknownBlockType)arg1;
- (void)startServiceAsync:(CDUnknownBlockType)arg1;
- (BOOL)isSomeInstanceRunning;
- (BOOL)isOurInstanceRunning;
- (id)init;

@end

