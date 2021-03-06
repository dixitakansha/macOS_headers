//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUBufferImageAdapter.h>

#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;
@protocol NUMutableBuffer;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage>
{
    id <NUMutableBuffer> _mutableBuffer;
}

- (void).cxx_destruct;
- (BOOL)copyBufferStorage:(id)arg1 region:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 device:(id)arg2 region:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)init;
- (id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

// Remaining properties
@property(readonly) NUColorSpace *colorSpace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly) NUImageLayout *layout;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly, copy) NURegion *validRegion;

@end

