//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UITable_UITableViewCellDelegate-Protocol.h>

@class NSArray, NSString, UICollectionViewLayout, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UIImageView, UILabel, UIScrollView, UIShadowView, UITableViewCell, UITableViewCollectionCell, UIView;

@interface UICollectionViewTableCell : UICollectionViewCell <UITable_UITableViewCellDelegate>
{
    UIView *_swipeableView;
    UIShadowView *_borderShadowTopView;
    UIShadowView *_borderShadowBottomView;
    UIView *_selectedBackgroundViewToRestoreWhenInteractiveMoveEnds;
    long long _accessoryType;
    BOOL _editing;
    double _reorderingCenterX;
    double _offsetForRevealingDeleteConfirmationButton;
    BOOL _interactiveMoveEffectsVisible;
    BOOL _borderShadowVisible;
    BOOL _transitioningLayouts;
    UITableViewCell *_swipeToDeleteCell;
    UITableViewCollectionCell *_tableViewCell;
    UICollectionViewLayout *_currentLayout;
}

@property(nonatomic, getter=_offsetForRevealingDeleteConfirmationButton, setter=_setOffsetForRevealingDeleteConfirmationButton:) double offsetForRevealingDeleteConfirmationButton; // @synthesize offsetForRevealingDeleteConfirmationButton=_offsetForRevealingDeleteConfirmationButton;
@property(nonatomic) __weak UICollectionViewLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) BOOL transitioningLayouts; // @synthesize transitioningLayouts=_transitioningLayouts;
@property(nonatomic) BOOL borderShadowVisible; // @synthesize borderShadowVisible=_borderShadowVisible;
@property(nonatomic) BOOL interactiveMoveEffectsVisible; // @synthesize interactiveMoveEffectsVisible=_interactiveMoveEffectsVisible;
@property(retain, nonatomic) UITableViewCollectionCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(retain, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell; // @synthesize swipeToDeleteCell=_swipeToDeleteCell;
- (void).cxx_destruct;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)setFocusStyle:(long long)arg1;
- (long long)focusStyle;
@property(readonly, nonatomic) BOOL showingDeleteConfirmation;
@property(nonatomic) struct UIEdgeInsets separatorInset;
@property(nonatomic) double indentationWidth;
@property(nonatomic) long long indentationLevel;
@property(retain, nonatomic) UIView *editingAccessoryView;
@property(nonatomic) long long editingAccessoryType;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) long long accessoryType;
@property(nonatomic) BOOL shouldIndentWhileEditing;
@property(nonatomic) BOOL showsReorderControl;
@property(readonly, nonatomic) long long editingStyle;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
@property(nonatomic) long long selectionStyle;
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1;
- (id)selectedBackgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundView;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UIImageView *imageView;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (BOOL)_shouldHaveFooterViewForSection:(long long)arg1;
- (BOOL)_shouldHaveHeaderViewForSection:(long long)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) UIColor *multiselectCheckmarkColor;
@property(readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property(readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) BOOL sectionContentInsetFollowsLayoutMargins;
@property(readonly, nonatomic, getter=_sectionCornerRadius) double sectionCornerRadius;
@property(readonly, nonatomic, getter=_sectionBorderWidth) double sectionBorderWidth;
@property(readonly, nonatomic, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property(readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property(readonly, nonatomic, getter=_indexBarExtentFromEdge) double indexBarExtentFromEdge;
@property(readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame;
@property(readonly, nonatomic, getter=_isShowingIndex) BOOL showingIndex;
@property(readonly, nonatomic, getter=_bottomPadding) double bottomPadding;
@property(readonly, nonatomic, getter=_topPadding) double topPadding;
- (BOOL)insetsContentViewsToSafeArea;
@property(readonly, nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;
@property(readonly, nonatomic, getter=_backgroundInset) double backgroundInset;
@property(readonly, nonatomic) BOOL overlapsSectionHeaderViews;
@property(readonly, nonatomic) BOOL usesVariableMargins;
@property(readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) BOOL separatorInsetIsRelativeToCellEdges;
@property(readonly, nonatomic) double estimatedSectionFooterHeight;
@property(readonly, nonatomic) double estimatedSectionHeaderHeight;
@property(readonly, nonatomic) double estimatedRowHeight;
@property(readonly, nonatomic) double sectionFooterHeight;
@property(readonly, nonatomic) double sectionHeaderHeight;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property(readonly, nonatomic) BOOL allowsMultipleSelection;
@property(readonly, nonatomic, getter=_numberOfSections) long long numberOfSections;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property(readonly, nonatomic, getter=_style) long long style;
@property(readonly, nonatomic, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property(readonly, nonatomic, getter=_rowSpacing) double rowSpacing;
@property(readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property(readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
- (void)_highlightDidEndForCell:(id)arg1 withInteraction:(id)arg2;
- (void)_prepareHighlightForCell:(id)arg1 withInteraction:(id)arg2;
- (BOOL)_shouldDrawThickSeparators;
- (void)_userSelectCell:(id)arg1;
- (void)_accessoryButtonAction:(id)arg1;
- (void)_updateCell:(id)arg1 withValue:(id)arg2;
- (void)_highlightCell:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4;
- (void)_animateDeletionOfRowWithCell:(id)arg1;
- (void)_animateDeletionOfRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButton:(id)arg1;
- (void)_removeWasCanceledForCell:(id)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg1;
- (void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3;
- (BOOL)_beginReorderingForCell:(id)arg1 touch:(id)arg2;
- (BOOL)_isReorderControlActiveForCell:(id)arg1;
- (BOOL)_isCellReorderable:(id)arg1;
- (id)_reorderingCell;
- (double)_deleteConfirmationHorizontalVelocity;
- (double)_deleteConfirmationHorizontalOffset;
- (void)_configureDeleteConfirmationDecelerationRate:(double)arg1;
- (void)_revealDeleteConfirmationButtonWithWidth:(double)arg1;
- (void)_endSwipeToDeleteGesture:(BOOL)arg1;
- (void)_animateSwipeCancelation;
- (void)_installSwipeToDeleteGobbler;
- (void)_actionButton:(id)arg1 pushedInCell:(id)arg2;
- (void)_swipeAccessoryButtonPushedInCell:(id)arg1;
@property(readonly, nonatomic, getter=_isEditingForSwipeDeletion) BOOL editingForSwipeDeletion;
- (void)_setSwipeToDeleteCell:(id)arg1 installGobbler:(BOOL)arg2;
- (void)_swipeToDeleteCell:(id)arg1;
@property(readonly, nonatomic, getter=_usesModernSwipeActions) BOOL usesModernSwipeActions;
@property(readonly, nonatomic, getter=_swipeActionButtons) NSArray *swipeActionButtons;
- (struct CGRect)_calloutTargetRectForCell:(id)arg1;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (void)_cellDidBecomeUnfocused:(id)arg1;
- (void)_cellDidBecomeFocused:(id)arg1;
- (BOOL)_canFocusCell:(id)arg1;
- (void)_cellDidHideSelectedBackground:(id)arg1;
- (void)_cellDidShowSelectedBackground:(id)arg1;
@property(readonly, nonatomic, getter=_wasEditing) BOOL wasEditing;
@property(readonly, nonatomic, getter=_isInModalViewController) BOOL inModalViewController;
@property(readonly, nonatomic, getter=_popoverControllerStyle) long long popoverControllerStyle;
- (double)_selectionAnimationDuration;
- (void)_setupForEditing:(BOOL)arg1 atIndexPath:(id)arg2 multiselect:(BOOL)arg3 editingStyle:(long long)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(long long)arg7 updateSeparators:(BOOL)arg8;
@property(nonatomic, getter=isEditing) BOOL editing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL canBeEdited;
@property(readonly, nonatomic, getter=isInTableLayout) BOOL inTableLayout;
- (void)prepareForReuse;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_updateInternalCellForTableLayout:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateCellForTableLayout:(BOOL)arg1;
- (void)_updateEditing;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)_removeInteractiveMoveShadowViews;
- (void)_insertInteractiveMoveShadowViews;
- (BOOL)_isInteractiveMoveShadowInstalled;
- (void)_layoutInteractiveMoveShadow;
- (void)_layoutTableViewCell;
- (struct CGRect)_contentViewFrame;
@property(readonly, nonatomic) UIView *swipeableView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonSetupTableCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

