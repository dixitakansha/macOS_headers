//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSCHMacTableHeaderCellAccessibility_super.h"

@class NSView;

@interface TSCHMacTableHeaderCellAccessibility : __TSCHMacTableHeaderCellAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (double)_tsaxDragAreaWidth;
- (double)_tsaxDragAreaHeight;
- (void)_tsaxFrameForCell:(struct CGRect *)arg1 affordance:(struct CGRect *)arg2;
@property(readonly, nonatomic) NSView *_tsaxDragAffordance;
- (struct CGRect)accessibilityFrame;
- (void)tsaxShowMenu;
@property(readonly, nonatomic) BOOL tsaxIsRowHeader;
@property(readonly, nonatomic) BOOL tsaxCanShowMenuButton;
- (struct CGRect)tsaxReferenceTabScreenFrame;
- (id)tsaxTarget;

@end

