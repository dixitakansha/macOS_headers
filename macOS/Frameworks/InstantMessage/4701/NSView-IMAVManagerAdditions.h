//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (IMAVManagerAdditions)
- (BOOL)_IMRenderIntoOpenGLBuffer:(struct __CVBuffer *)arg1 context:(struct _CGLContextObject *)arg2 onScreen:(int *)arg3 forTime:(CDStruct_e50ab651 *)arg4;
- (void)_IMRenderIntoOpenGLBufferMainThread:(id)arg1;
- (void)_IMGetOpenGLBufferContext:(struct _CGLContextObject **)arg1 pixelFormat:(struct _CGLPixelFormatObject **)arg2;
- (BOOL)_IMUsePixelBufferCallBacks;
- (unsigned long long)_IMDataSourceVideoUpdateMechanism;
- (BOOL)_IMRenderIntoPixelBuffer:(struct __CVBuffer *)arg1 forTime:(CDStruct_e50ab651 *)arg2;
- (void)_IMRenderIntoPixelBufferMainThread:(struct __CVBuffer *)arg1;
- (void)_IMGetPixelBufferPixelFormat:(unsigned int *)arg1;
@end

