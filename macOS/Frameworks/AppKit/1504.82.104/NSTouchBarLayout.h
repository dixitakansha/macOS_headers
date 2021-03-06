//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSTouchBarLayout : NSObject
{
    double _visualCenterX;
    double _defaultItemPadding;
}

@property double defaultItemPadding; // @synthesize defaultItemPadding=_defaultItemPadding;
@property double visualCenterX; // @synthesize visualCenterX=_visualCenterX;
- (void)_calculateLayoutOfItems:(id)arg1 withAvailableSize:(struct CGSize)arg2 startingWidth:(double)arg3 xOrigin:(double)arg4 sharesLeftEdge:(BOOL)arg5 sharesRightEdge:(BOOL)arg6 itemsToFrames:(id)arg7;
- (double)_adjustedHeightForItem:(id)arg1 availableHeight:(double)arg2;
- (double)_fittingWidthForItems:(id)arg1 availableWidth:(double)arg2 sharesLeftEdge:(BOOL)arg3 sharesRightEdge:(BOOL)arg4 attachedItems:(id)arg5;
- (id)orderedItemsGivenUnorderedArray:(id)arg1 usingOrderedArray:(id)arg2;
- (double)_minWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (double)_preferredWidthOfCenterItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (double)_contentClippingWidthOfCenterItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (double)_maxWidthOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2 sharesRightEdge:(BOOL)arg3;
- (BOOL)_itemIsFlexibleSpace:(id)arg1;
- (struct CGSize)_contentClippingSizeOfItem:(id)arg1;
- (struct CGSize)_preferredSizeOfItem:(id)arg1;
- (long long)priorityIndexOfItem:(id)arg1;
- (double)itemPaddingForItem:(id)arg1;
- (id)prioritizedItems:(id)arg1;
- (struct CGRect)_centerRectGivenItems:(id)arg1 remainingLeftWidth:(double)arg2 remainingRightWidth:(double)arg3 sharesLeftEdge:(BOOL)arg4 sharesRightEdge:(BOOL)arg5 availableWidth:(double)arg6;
- (long long)_highestPriorityIndexOfItems:(id)arg1;
- (void)_touchUpSpacesInItems:(id)arg1 itemsToAttributes:(id)arg2;
- (double)_rightInsetOfItems:(id)arg1 sharesRightEdge:(BOOL)arg2;
- (double)_leftInsetOfItems:(id)arg1 sharesLeftEdge:(BOOL)arg2;
- (void)items:(id)arg1 centerItems:(id)arg2 minSize:(struct CGSize *)arg3 maxSize:(struct CGSize *)arg4;
- (id)_calculateLayoutOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3;
- (id)framesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3;
- (id)_attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3 sharesRightEdge:(BOOL)arg4;
- (id)attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(struct CGSize)arg3;
- (id)init;
- (id)initWithVisualCenterX:(double)arg1;

@end

