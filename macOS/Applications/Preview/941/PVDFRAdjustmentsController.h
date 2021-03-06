//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCustomTouchBarItem, NSGroupTouchBarItem;
@protocol PVDFRActionTarget;

@interface PVDFRAdjustmentsController : NSObject
{
    NSGroupTouchBarItem *_touchBarItem;
    NSCustomTouchBarItem *_rotateLeftItem;
    NSCustomTouchBarItem *_rotateRightItem;
    NSCustomTouchBarItem *_flipHorizontallyItem;
    NSCustomTouchBarItem *_flipVerticallyItem;
    id <PVDFRActionTarget> _delegate;
}

+ (id)_accessibilityIdentifierForSender:(id)arg1;
+ (id)_accessibilityLabelForSender:(id)arg1;
+ (id)_imageForSender:(id)arg1;
@property __weak id <PVDFRActionTarget> delegate; // @synthesize delegate=_delegate;
@property(retain) NSCustomTouchBarItem *flipVerticallyItem; // @synthesize flipVerticallyItem=_flipVerticallyItem;
@property(retain) NSCustomTouchBarItem *flipHorizontallyItem; // @synthesize flipHorizontallyItem=_flipHorizontallyItem;
@property(retain) NSCustomTouchBarItem *rotateRightItem; // @synthesize rotateRightItem=_rotateRightItem;
@property(retain) NSCustomTouchBarItem *rotateLeftItem; // @synthesize rotateLeftItem=_rotateLeftItem;
@property(retain) NSGroupTouchBarItem *touchBarItem; // @synthesize touchBarItem=_touchBarItem;
- (void).cxx_destruct;
- (void)adjustmentHit:(id)arg1;
- (id)_createButtonWithTag:(long long)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

