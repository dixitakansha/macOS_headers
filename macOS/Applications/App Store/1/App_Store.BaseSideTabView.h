//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@interface App_Store.BaseSideTabView : NSVisualEffectView
{
    // Error parsing type: , name: topAccessoryView
    // Error parsing type: , name: items
    // Error parsing type: , name: tabItemViews
    // Error parsing type: , name: bottomAccessoryView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: selectedItem
    // Error parsing type: , name: previouslySelectedTabItem
    // Error parsing type: , name: selectedAccessory
}

+ (double)bottomAccessoryToBottomEdgeMargin;
+ (double)tabItemHeight;
+ (double)toolbarSeparatorCompensation;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)currentToolbarHeight;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (long long)accessibilityOrientation;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityElement;
- (void)setVibrancyEnabled:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic, readonly) struct CGSize fittingSize;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFlipped;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

