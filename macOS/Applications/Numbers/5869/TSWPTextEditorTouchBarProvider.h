//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPBaseTouchBarProvider.h"

#import "TSWPBIUSTouchBarItemDelegate-Protocol.h"

@class NSObject, NSString, NSTouchBar, TSWPBIUSTouchBarItem, TSWPCandidateListTouchBarItem, TSWPStylePresetTouchBarItemController;
@protocol TSWPTextEditorTouchBarProviderDelegate;

@interface TSWPTextEditorTouchBarProvider : TSWPBaseTouchBarProvider <TSWPBIUSTouchBarItemDelegate>
{
    NSTouchBar *_touchBar;
    NSObject<TSWPTextEditorTouchBarProviderDelegate> *_delegate;
    TSWPCandidateListTouchBarItem *_candidateListItem;
    TSWPBIUSTouchBarItem *_biuItem;
    TSWPStylePresetTouchBarItemController *_listStylePresetTouchBarItemController;
    TSWPStylePresetTouchBarItemController *_paragraphStylePresetTouchBarItemController;
}

+ (id)p_verticalAlignmentTouchBarItemForOwner:(id)arg1;
+ (id)p_verticalAlignmentPopoverTouchBarForOwner:(id)arg1;
+ (id)p_horizontalAlignmentPopoverTouchBarItemForOwner:(id)arg1 withAutomatic:(BOOL)arg2;
+ (id)p_horizontalAlignmentPopoverTouchBarForOwner:(id)arg1 includesAutomatic:(BOOL)arg2;
+ (id)p_biuPopoverTouchBarForItem:(id)arg1;
+ (id)buttonWidthSpaceTouchBarItem;
+ (id)paragraphStylesPopoverControllerForDocumentRoot:(id)arg1;
+ (id)listStylesPopoverControllerForDocumentRoot:(id)arg1;
+ (id)verticalTextAlignmentPopoverItem;
+ (id)horizontalTextAlignmentPopoverItemWithAutomatic:(BOOL)arg1;
+ (id)fontColorTouchBarItem;
+ (id)fontColorTouchBarItemUsingCustomAsset:(id)arg1;
+ (id)baselineTouchBarItem;
+ (id)biuTouchBarItemWithStrikethrough:(BOOL)arg1;
+ (id)biuPopoverItem;
+ (id)fontSizeTouchBarItem;
+ (id)makeCandidateListTouchBarItemForEditor:(id)arg1;
+ (id)indentOutdentTouchBarItemForEditor:(id)arg1;
@property(retain, nonatomic) TSWPStylePresetTouchBarItemController *paragraphStylePresetTouchBarItemController; // @synthesize paragraphStylePresetTouchBarItemController=_paragraphStylePresetTouchBarItemController;
@property(retain, nonatomic) TSWPStylePresetTouchBarItemController *listStylePresetTouchBarItemController; // @synthesize listStylePresetTouchBarItemController=_listStylePresetTouchBarItemController;
@property(retain, nonatomic) TSWPBIUSTouchBarItem *biuItem; // @synthesize biuItem=_biuItem;
@property(retain, nonatomic) TSWPCandidateListTouchBarItem *candidateListItem; // @synthesize candidateListItem=_candidateListItem;
@property(nonatomic) __weak NSObject<TSWPTextEditorTouchBarProviderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)p_newTouchBar;
- (void)didUpdateButtonsForBIUItem:(id)arg1;
- (id)p_validateTouchBar;
- (id)touchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

