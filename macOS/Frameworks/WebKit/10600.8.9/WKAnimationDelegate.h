//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAnimationDelegate : NSObject
{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost *_layerTreeHost;
}

- (void)animationDidStart:(id)arg1;
- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost *)arg2;

@end

