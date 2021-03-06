//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSDictionary, NSString;

@interface SUDiskUsageView : NSView
{
    NSArray *usageNameArray;
    NSArray *usageOrderArray;
    NSDictionary *usageDictionary;
    struct CGSize calculatedSize;
    BOOL _namesAreSelectable;
    NSArray *_itemColorArray;
    NSArray *_itemBorderColorArray;
    NSString *_label;
}

+ (id)_defaultColorsFromSet:(const double *)arg1 withCount:(unsigned long long)arg2 lastColorWhite:(BOOL)arg3 prevColorGray:(BOOL)arg4;
+ (id)defaultBorderColorsWithCount:(unsigned long long)arg1 lastColorWhite:(BOOL)arg2 prevColorGray:(BOOL)arg3;
+ (id)defaultBorderColorsWithCount:(unsigned long long)arg1 lastColorWhite:(BOOL)arg2;
+ (id)defaultColorsWithCount:(unsigned long long)arg1 lastColorWhite:(BOOL)arg2 prevColorGray:(BOOL)arg3;
+ (id)defaultColorsWithCount:(unsigned long long)arg1 lastColorWhite:(BOOL)arg2;
+ (id)defaultUsageOrderForAPFSLV;
+ (id)defaultUsageOrder;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSArray *itemBorderColorArray; // @synthesize itemBorderColorArray=_itemBorderColorArray;
@property(retain) NSArray *itemColorArray; // @synthesize itemColorArray=_itemColorArray;
@property BOOL namesAreSelectable; // @synthesize namesAreSelectable=_namesAreSelectable;
- (void).cxx_destruct;
- (void)_makeTextFieldLabel:(id)arg1 isTopLabel:(BOOL)arg2;
- (void)_rebuildPropertyLabels;
- (struct CGSize)fittingSize;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)setUsageDictionary:(id)arg1 order:(id)arg2 names:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

