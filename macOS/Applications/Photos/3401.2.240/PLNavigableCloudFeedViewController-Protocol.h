//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICPSharedPhotoStream, ICPSharedPhotoStreamComment, ICPSharedPhotoStreamMediaItem;

@protocol PLNavigableCloudFeedViewController <NSObject>
- (void)navigateToNewestContentAnimated:(BOOL)arg1;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(ICPSharedPhotoStream *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToCloudFeedComment:(ICPSharedPhotoStreamComment *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToRevealCloudFeedComment:(ICPSharedPhotoStreamComment *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToCloudFeedAsset:(ICPSharedPhotoStreamMediaItem *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToRevealCloudFeedAsset:(ICPSharedPhotoStreamMediaItem *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToCloudFeedAlbum:(ICPSharedPhotoStream *)arg1 completion:(void (^)(NSViewController *))arg2;
- (void)navigateToRevealCloudFeedAlbum:(ICPSharedPhotoStream *)arg1 completion:(void (^)(NSViewController *))arg2;
@end

