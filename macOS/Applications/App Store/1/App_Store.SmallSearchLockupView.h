//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString, _TtC9App_Store10ButtonView, _TtC9App_Store11ArtworkView, _TtC9App_Store14StarRatingView, _TtC9App_Store15OfferButtonView, _TtC9App_Store20DynamicTypeTextField;

@interface App_Store.SmallSearchLockupView : NSView
{
    // Error parsing type: , name: metadataRegularMargin
    // Error parsing type: , name: metadataSmallMargin
    // Error parsing type: , name: metadataTextSpace
    // Error parsing type: , name: regularWidthColumnSpacing
    // Error parsing type: , name: isAd
    // Error parsing type: , name: adButton
    // Error parsing type: , name: includeRatings
    // Error parsing type: , name: artworkView
    // Error parsing type: , name: titleLabelView
    // Error parsing type: , name: subtitleLabelView
    // Error parsing type: , name: offerLabelView
    // Error parsing type: , name: offerButton
    // Error parsing type: , name: userRatingView
    // Error parsing type: , name: ratingCountLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: adButtonClickHandler
}

+ (struct CGSize)itemSizeWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 fitting:(struct CGSize)arg4 in:(id)arg5;
- (CDUnknownBlockType).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)hitTest:(struct CGPoint)arg1;
- (void)adButtonTrampolineWithSender:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType adButtonClickHandler; // @synthesize adButtonClickHandler;
- (void)layout;
- (struct JEMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
@property(nonatomic, copy) NSString *descriptionText;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) _TtC9App_Store20DynamicTypeTextField *ratingCountLabel; // @synthesize ratingCountLabel;
@property(nonatomic, retain) _TtC9App_Store14StarRatingView *userRatingView; // @synthesize userRatingView;
@property(nonatomic, readonly) _TtC9App_Store15OfferButtonView *offerButton; // @synthesize offerButton;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *offerLabelView; // @synthesize offerLabelView;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *subtitleLabelView; // @synthesize subtitleLabelView;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *titleLabelView; // @synthesize titleLabelView;
@property(nonatomic, readonly) _TtC9App_Store11ArtworkView *artworkView; // @synthesize artworkView;
@property(nonatomic) BOOL includeRatings; // @synthesize includeRatings;
@property(nonatomic, retain) _TtC9App_Store10ButtonView *adButton; // @synthesize adButton;
@property(nonatomic) BOOL isAd; // @synthesize isAd;
@property(nonatomic) double regularWidthColumnSpacing; // @synthesize regularWidthColumnSpacing;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

