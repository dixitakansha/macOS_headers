//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface MyProgressReporter : NSObject
{
    NSProgress *_progress;
    BOOL _receivedProgressUpdate;
}

@property(nonatomic) BOOL receivedProgressUpdate; // @synthesize receivedProgressUpdate=_receivedProgressUpdate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end

