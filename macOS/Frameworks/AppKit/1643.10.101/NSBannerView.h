//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSVisualEffectView, _NSBannerDecorationView;

@interface NSBannerView : NSView
{
    unsigned long long _bannerStyle;
    unsigned long long _dividerPosition;
    NSVisualEffectView *_blurView;
    _NSBannerDecorationView *_decorationView;
    BOOL _drawsBackground;
    BOOL _contiguousWithTitlebar;
}

+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (double)_heightOfStyle:(unsigned long long)arg1;
@property unsigned long long bannerStyle; // @synthesize bannerStyle=_bannerStyle;
- (void)viewDidMoveToWindow;
- (id)_preferredAppearance;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
@property unsigned long long dividerPosition;
@property(getter=isContiguousWithTitlebar) BOOL contiguousWithTitlebar;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)_updateBlurViewIfNeeded;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

