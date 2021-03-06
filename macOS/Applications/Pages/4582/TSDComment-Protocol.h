//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDAnnotation-Protocol.h"

@class NSString, TSDCommentStorage, TSKAnnotationAuthor, TSKCommand;
@protocol TSDAnnotationChangingCommand;

@protocol TSDComment <TSDAnnotation>
@property(readonly, nonatomic) BOOL isHighlight;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForUpgradingToACommentForAuthor:(TSKAnnotationAuthor *)arg1;
- (TSKCommand *)commandForDeletingComment;
- (TSKCommand *)commandForDeletingReply:(TSDCommentStorage *)arg1;
- (TSKCommand *)commandForEditingReply:(TSDCommentStorage *)arg1 withReplyText:(NSString *)arg2;
- (TSKCommand *)commandForReplacingCreatedReplyWithReplyText:(NSString *)arg1 author:(TSKAnnotationAuthor *)arg2;
- (TSKCommand *)commandForCreatingReplyWithReplyText:(NSString *)arg1 author:(TSKAnnotationAuthor *)arg2;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForChangingCommentText:(NSString *)arg1;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForInsertingWithCommentText:(NSString *)arg1;
- (void)commentWillBeAddedToDocumentRoot;
@end

