//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, WBSFormControlMetadata, _WKFrameHandle;

@protocol FormAutoFiller <NSObject>
- (void)automaticPasswordExplanationDismissedInFrame:(_WKFrameHandle *)arg1 focusedPasswordControlUniqueID:(NSString *)arg2;
- (void)removeAutomaticPasswordElementsInFrame:(_WKFrameHandle *)arg1 formID:(double)arg2 focusedPasswordControlUniqueID:(NSString *)arg3 passwordControlUniqueIDs:(NSArray *)arg4;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(_WKFrameHandle *)arg1 formID:(double)arg2 focusedPasswordControlUniqueID:(NSString *)arg3 passwordControlUniqueIDs:(NSArray *)arg4 automaticPassword:(NSString *)arg5;
- (void)resumeLoadingAfterSavingFormData;
- (void)textDidChangeDelayCompletedField:(NSString *)arg1 inFrame:(_WKFrameHandle *)arg2;
- (void)collectMetadataForActiveForm:(void (^)(WBSFormMetadata *))arg1;
- (void)collectFormMetadataForSafeAutoFillConfirmationInFrame:(_WKFrameHandle *)arg1 atURL:(NSURL *)arg2 contactProperty:(NSString *)arg3 contactIdentifier:(NSString *)arg4 contactLabel:(NSString *)arg5;
- (void)collectFormMetadataForPreFillingFormAtURL:(NSURL *)arg1;
- (void)collectFormMetadataForManualAutoFillInFrame:(_WKFrameHandle *)arg1 atURL:(NSURL *)arg2;
- (void)collectEditedFormTextStatus:(void (^)(BOOL))arg1;
- (void)recursivelyClearFormMetadataForFrames:(_WKFrameHandle *)arg1;
- (void)disableSpellCheckInField:(NSString *)arg1 inFrame:(_WKFrameHandle *)arg2;
- (void)showAddressAutoFillButtonInFieldIfStillFocused:(WBSFormControlMetadata *)arg1 inFrame:(_WKFrameHandle *)arg2;
- (void)replaceRange:(struct _NSRange)arg1 inField:(NSString *)arg2 inFrame:(_WKFrameHandle *)arg3 withString:(NSString *)arg4 andSelectTailStartingAt:(unsigned long long)arg5 completionHandler:(void (^)(WBSFormControlMetadata *, WBSFormMetadata *))arg6;
- (void)setFormControls:(NSArray *)arg1 inFrame:(_WKFrameHandle *)arg2 asAutoFilled:(BOOL)arg3;
- (void)selectRange:(struct _NSRange)arg1 inField:(NSString *)arg2 inFrame:(_WKFrameHandle *)arg3;
- (void)fillField:(NSString *)arg1 inForm:(double)arg2 frame:(_WKFrameHandle *)arg3 withGeneratedPassword:(NSString *)arg4;
- (void)fillForm:(double)arg1 inFrame:(_WKFrameHandle *)arg2 withPassword:(NSString *)arg3;
- (void)autoFillOneTimeCodeFieldsInFrame:(_WKFrameHandle *)arg1 withValue:(NSString *)arg2;
- (void)autoFillFormInFrame:(_WKFrameHandle *)arg1 withValuesAndUnfocusField:(NSDictionary *)arg2;
- (void)preFillFormInFrame:(_WKFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillFormInFrame:(_WKFrameHandle *)arg1 withValues:(NSDictionary *)arg2 andFocusField:(NSString *)arg3;
- (void)autoFillFormInFrame:(_WKFrameHandle *)arg1 withValues:(NSDictionary *)arg2 focusFieldAndRecursivelyClearFormMetadata:(NSString *)arg3;
- (void)autoFillFormInFrame:(_WKFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)annotateForm:(double)arg1 inFrame:(_WKFrameHandle *)arg2 withValues:(NSDictionary *)arg3;
@end

