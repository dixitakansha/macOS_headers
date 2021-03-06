//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, TSPPasteboard, TSPPasteboardWriteAssistant, TSWPSelection, TSWPStorage;
@protocol TSWPStyleProvider;

@protocol TSWPPasteboardControllerAdditions
- (NSDictionary *)descriptionForPasteboard:(TSPPasteboard *)arg1;
- (BOOL)hasTableSubsectionDragDropOnPasteboard:(TSPPasteboard *)arg1;
- (NSDictionary *)contentDescriptionForFormulaStorage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2;
- (NSDictionary *)contentDescriptionForTextStorage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2;
- (BOOL)hasSingleTableOfContentsOnPasteboard:(TSPPasteboard *)arg1;
- (BOOL)hasSingleTableDrawableOnPasteboard:(TSPPasteboard *)arg1;
- (NSArray *)providersForDrawablesForTargetStorage:(TSWPStorage *)arg1 fromPasteboard:(TSPPasteboard *)arg2;
- (NSArray *)formulasFromPasteboard:(TSPPasteboard *)arg1;
- (BOOL)hasFormulasOnPasteboard:(TSPPasteboard *)arg1;
- (NSArray *)textStoragesFromPasteboard:(TSPPasteboard *)arg1 forTargetStorage:(TSWPStorage *)arg2 canExtractFromDrawables:(BOOL)arg3 smartPaste:(char *)arg4;
- (NSArray *)textStoragesFromPasteboard:(TSPPasteboard *)arg1 forTargetStorage:(TSWPStorage *)arg2 smartPaste:(char *)arg3;
- (BOOL)hasTextStoragesOnPasteboard:(in TSPPasteboard *)arg1 attachmentsAllowed:(BOOL)arg2;
- (void)copyFormulaStorage:(TSWPStorage *)arg1 selection:(TSWPSelection *)arg2 toPasteboard:(TSPPasteboard *)arg3 writeAssistant:(TSPPasteboardWriteAssistant *)arg4;
- (void)copyTextStorage:(TSWPStorage *)arg1 selection:(TSWPSelection *)arg2 toPasteboard:(TSPPasteboard *)arg3 smartCopy:(BOOL)arg4 styleProvider:(id <TSWPStyleProvider>)arg5 writeAssistant:(TSPPasteboardWriteAssistant *)arg6;
- (NSString *)documentIdDescription;
- (NSString *)documentIdDescriptionForPasteboard:(TSPPasteboard *)arg1;
@end

