//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider, MRTextRenderer, NSMutableArray, NSMutableDictionary;

@interface MREffectReflectionsTitle : MREffect
{
    NSMutableDictionary *mSprites;
    BOOL mFlipped;
    BOOL mSpeedUpRight;
    double mImageMain;
    double mTextMain;
    MRTextRenderer *mTextRenderer;
    MRTextRenderer *mWordRenderer;
    NSMutableArray *mWordImages;
    NSMutableArray *mWordFrames;
    NSMutableArray *mCachedRenderedWords;
    double mTextYOffset;
    struct CGSize mTextSize;
    struct CGSize mTextImageSize;
    MRImageProvider *mMaskProvider;
    MRImageProvider *mGroundShadowCenterProvider;
    MRImageProvider *mGroundShadowLeftProvider;
    MRImageProvider *mGroundShadowRightProvider;
    NSMutableDictionary *mBreakInformation;
    BOOL mIsLoaded;
}

- (void)_unload;
- (void)cacheRenderedWords;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderKey:(id)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 yRot:(double)arg4 tX:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 light:(BOOL)arg9 shadow:(BOOL)arg10;
- (void)render1SlideAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 tilt:(long long)arg5 phaseOutType:(long long)arg6 direction:(long long)arg7;
- (void)renderTextAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)_applySizeScripts:(double)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;

@end

