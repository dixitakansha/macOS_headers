//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCRecorderStyleProvider : NSObject
{
}

+ (id)sharedStyleProvider;
- (BOOL)_usesRemindersUI;
- (BOOL)_isMarzipan;
- (BOOL)_isIpadOrMarzipan;
- (BOOL)showsEmptyLibraryMessageInLibrary;
- (BOOL)supportsLockScreenRotation;
- (BOOL)playbackCardHasInsets;
- (BOOL)allowsScrollingUnderNavBar;
- (BOOL)showsVirtualNavBarInPlaybackView;
- (BOOL)alwaysHidesDetailNavBar;
- (BOOL)hasTransparentMasterNavBarBackground;
- (BOOL)usesSystemToolBarForRecordingLibrary;
- (BOOL)usesExtraWidePrimaryColumnWidth;
- (BOOL)usesScreenCaptureAsCardBackground;
- (BOOL)usesNavBarLargeTitleAndSearchBarHosting;
- (BOOL)showsGradientsInBottomOfCardView;
- (BOOL)hostsTransportAndDoneButtonInBottomSection;
- (BOOL)presentsTitleAndAdditionalEditingControlsInPlaybackCard;
- (BOOL)presentsTitleAndAdditionalEditingControlsInRecordingCard;
- (BOOL)supportsCompactRecordingCard;
- (BOOL)shouldShowOverviewWaveform;
- (BOOL)supportsRotationButNotOtherResizing;
- (double)animationDurationBetweenLibraryAndCard;
- (BOOL)presentsCardModallyInRootViewController;
- (BOOL)expandsTableViewRowOnSelection;
- (BOOL)isAccessibilityLargerTextSizeEnabled;
- (id)accessibilityLargeSizes;
- (BOOL)_isIpad;
- (id)emptyLibraryTextScalableSecondaryFont;
- (id)editingControlButtonLabelFont;
- (id)recordingControlTextFont;
- (id)durationLabelFont;
- (id)creationDateLabelFontForTableViewCell;
- (id)creationDateLabelFont;
- (id)descriptionViewScalableTitleFontForCardView;
- (id)descriptionViewScalableTitleFontForTableViewCell;
- (id)selectionOverlayEndpointTimeColor;
- (id)selectionOverlayEndpointBarColor;
- (id)selectionOverlayColor;
- (id)playbackPositionTimeColor;
- (id)recordPositionBarColor;
- (id)playbackPositionBarColor;
- (id)timeLineMajorPlaybackMarkerColor;
- (id)timeLineMinorPlaybackMarkerColor;
- (id)timeLineMinorMarkerColor;
- (id)timeLineMajorMarkerColor;
- (id)timelinePlaybackBackgroundColor;
- (id)timelinePlaybackTimeColor;
- (id)timeLineBackgroundColor;
- (id)timeLineTimeColor;
- (id)waveformPlaybackColor;
- (id)waveformPlaybackBackgroundColor;
- (id)waveformHighlightColor;
- (id)waveformColor;
- (id)waveformBackgroundColor;
- (id)backgroundColor;
- (id)waveformCompactBackgroundColor;
- (id)tableViewSeparatorColor;
- (long long)cellEditingSelectionStyle;
- (long long)cellSelectionStyle;
- (id)tableViewEditButtonTextColor;
- (id)tableViewCellTextColor;
- (id)tableViewCellVibrantBackgroundColor;
- (id)tableViewCellBackgroundColor;
- (id)tableViewBackgroundColor;
- (id)emptyLibraryBackgroundColor;
- (id)emptyLibraryMessageTextColor;
- (id)footerViewBackgroundColor;
- (id)recordingSectionDoneButtonInnerColor;
- (id)recordingControlOuterColorResume;
- (id)recordingControlInnerColorResume;
- (id)recordingControlInnerColor;
- (id)recordingControlFontColorResume;
- (id)recordingControlFontColor;
- (id)titleEditingInsertionPointColor;
- (id)recordingCardTopBorderColor2;
- (id)recordingCardTopBorderColor1;
- (id)recordingCardBottomGradientColor;
- (id)recordingCardTopGradientColor;
- (id)recordingCardBottomAccessoryBackgroundColor;
- (id)recordingCardDefaultBackgroundColor;
- (id)playbackCardTimeLabelFontColor;
- (id)playbackCardTopBorderColor2;
- (id)playbackCardTopBorderColor1;
- (id)playbackCardBottomGradientColor;
- (id)playbackCardTopGradientColor;
- (id)actionControlsColorForPlaybackCard;
- (id)transportControlsColorForPlaybackCard;
- (id)transportControlsColorForRecordingCard;
- (id)transportControlsColorForLibrary;
- (id)_roundedThemePrimaryBackgroundColor;
- (id)navigationBarTintColor;
- (id)mainViewBackgroundColor;
- (struct CGSize)minimumCanvasSize;
- (double)overviewWaveformHorizontalSpacing;
- (double)waveformHorizontalSpacing;
- (double)overviewWaveformWaveWidth;
- (double)waveformWaveWidth;
- (double)waveformVerticalOffset;
- (double)waveformVerticalHeightReduction;
- (double)defaultFlushRate;
- (double)maximumDecibelDisplayRange;
- (double)minimumDecibelDisplayRange;
- (double)descriptionViewTitleToSecondaryPadding;
- (struct CGSize)actionMenuImageSize;
- (double)libraryCellSliderAndControlsVerticalStackViewSpacing;
- (double)libraryCellDescriptionViewShuttleBarPadding;
- (double)libraryCellShuttleBarHeight;
- (double)libraryCellDescriptionHeight;
- (double)recordingControlLozengeFixedWidth;
- (double)recordingControlPauseStrokeCornerRadius;
- (double)recordingControlPauseGapFraction;
- (double)recordingControlSquareCornerRadius;
- (double)recordingControlInnerSquareWidth;
- (double)recordingControlOuterRingGap;
- (double)recordingControlOuterRingThickness;
- (double)recordingControlDiameter;
- (double)transportButtonAnimationDuration;
- (double)transportButtonAnimationShrinkFactor;
- (id)transportButtonAnimationCircleColor;
- (double)transportButtonAnimationPlayCircleRadius;
- (double)transportButtonAnimationJumpCircleRadius;
- (struct UIEdgeInsets)playbackViewEdgeInsets;
- (double)playbackViewCornerRadius;
- (double)playbackViewShuttleBarWidth;
- (double)playbackViewVerticalSpacingBelowOverviewWaveform;
- (double)playbackViewVerticalSpacingAboveOverviewWaveform;
- (double)playbackViewWaveformOverviewSidePadding;
- (double)playbackViewTopPadding;
- (double)playbackViewTimeSectionHeight;
- (id)playbackViewTimeLabelFont;
- (double)trimDeleteButtonSpacing;
- (double)inOutButtonCornerRadius;
- (id)inOutButtonBackgroundColor;
- (id)inOutButtonTextColor;
- (double)trimDeleteButtonCornerRadius;
- (id)trimDeleteButtonBackgroundColor;
- (id)trimDeleteButtonTextColor;
- (double)virtualNavBarButtonItemSpacing;
- (double)dimmingAlphaForCardBackground;
- (double)recordingViewWaveformOverviewSidePadding;
- (double)recordingViewWaveformOverviewSpaceBetweenMainWaveformAndOverview;
- (double)borderLayerThickness;
- (double)actionButtonExtraXAxisActiveWidth;
- (double)cardTransitionToCompactSpringiness;
- (double)topMarginForCardView;
- (double)cornerRadiusForCardView;
- (double)shuttleBarHeight;
- (double)editToolbarCompactHeight;
- (double)editToolbarHeight;
- (double)positionReadoutHeight;
- (double)fullScreenDescriptionHeight;
- (double)recordingSectionBottomPadding;
- (double)bottomAccessoryDescriptionHeight;
- (double)selectionOverlayBorderWidth;
- (double)overviewWaveformCornerRadius;
- (double)overviewWaveformHeight;
- (double)bottomAccessoryWaveformHeight;
- (double)recordingControlSectionHeight;
- (double)topScreenSpacerHeight;
- (double)recordingControlHeight;
- (struct CGSize)centerClusterControlSize;
- (double)centerClusterWidthLibrary;
- (double)centerClusterWidthCard;
- (double)emptyLibraryLabelXInset;
- (double)primaryColumnWidth;
- (double)descriptionViewSecondaryLabelAlpha;
- (double)recordingControlAlphaWhenPressed;
- (double)recordingControlAnimationDuration;
- (double)recordingViewResizeAnimationDuration;
- (double)tableViewAlphaWhenDisabled;
- (long long)tableViewAnimationCurve;
- (double)tableViewAnimationDuration;
- (unsigned long long)supportedInterfaceOrientations;

@end

