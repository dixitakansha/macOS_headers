//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentSharedData : NSObject
{
    struct _opaque_pthread_mutex_t _synchMutex;
    struct CGPoint _canonicalClipBoundsOrigin;
    struct CGPoint _velocity;
    double _lastScrollDirection;
    double _progress;
    BOOL _isDrawingVisibleRect;
    struct CGRect _lastValidRenderedContentRect;
    struct CGRect _documentFrame;
    struct CGSize _clipViewSize;
}

- (void)threadSafePropertyAccess:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithConstantData:(id)arg1;
- (id)init;

@end

