//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SVNOperation.h"

@class NSDateFormatter;

__attribute__((visibility("hidden")))
@interface SVNLogOperation : SVNOperation
{
    id source;
    NSDateFormatter *logDateFormatter;
}

- (int)operationType;
- (id)statusCaption_;
- (void)main;
- (id)paths;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 delegate:(id)arg2 source:(id)arg3;
- (id)init;
- (void)taskWrapperDidTerminate:(id)arg1 terminationStatus:(int)arg2;

@end

