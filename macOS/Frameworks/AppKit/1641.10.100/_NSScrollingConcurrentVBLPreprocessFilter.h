//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _NSScrollStateEventListener;

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentVBLPreprocessFilter : NSObject
{
    id <_NSScrollStateEventListener> _scrollStateDelegate;
}

@property(nonatomic) id <_NSScrollStateEventListener> scrollStateDelegate; // @synthesize scrollStateDelegate=_scrollStateDelegate;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;

@end

