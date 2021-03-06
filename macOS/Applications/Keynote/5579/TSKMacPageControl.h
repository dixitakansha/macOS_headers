//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSImage, NSMutableArray, NSString, NSView;

@interface TSKMacPageControl : NSControl
{
    NSString *mPageIndicatorImage;
    NSImage *mOffImage;
    NSImage *mOnImage;
    unsigned long long mCurrentPage;
    unsigned long long mNumberOfPages;
    BOOL mCanWrap;
    BOOL mHidesForSinglePage;
    NSView *mCenteringView;
    NSMutableArray *mCenteringViewConstraints;
    NSMutableArray *mImageViewConstraints;
}

+ (id)keyPathsForValuesAffectingIntegerValue;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (Class)cellClass;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage=mHidesForSinglePage;
@property(nonatomic) BOOL canWrap; // @synthesize canWrap=mCanWrap;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=mNumberOfPages;
- (void)setNilValueForKey:(id)arg1;
- (unsigned long long)p_pageIndexOfEvent:(id)arg1;
- (void)updateConstraints;
- (void)p_ensureSubviews;
- (void)sendAction;
- (void)mouseDown:(id)arg1;
- (void)takeCurrentPageFrom:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)prevPage:(id)arg1;
- (void)nextPage:(id)arg1;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (struct CGSize)intrinsicContentSize;
- (BOOL)acceptsFirstResponder;
@property(nonatomic) unsigned long long currentPage;
@property(readonly, nonatomic) struct CGSize p_imageSize;
@property(readonly, retain, nonatomic) NSView *p_centeringView;
@property(readonly, retain, nonatomic) NSImage *p_offImage;
@property(readonly, retain, nonatomic) NSImage *p_onImage;
- (void)dealloc;
- (id)initWithPageIndicatorImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

