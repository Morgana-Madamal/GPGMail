/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCActivityTarget.h"

@class NSArray, NSMutableSet;

@interface GenericAttachmentFetcher : NSObject <MCActivityTarget>
{
    NSArray *_attachments;
    NSMutableSet *_attachmentsBeingDownloaded;
}

- (double)temporaryFolderTimeout;
- (void)didSaveAttachment:(id)arg1 toPath:(id)arg2;
- (void)didSaveAttachments:(id)arg1 paths:(id)arg2;
- (void)downloadedAllAttachments;
- (void)didFinishBackgroundLoadOfAttachment:(id)arg1;
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;
- (void)_saveAttachments:(id)arg1 itemManager:(id)arg2;
- (id)downloadedAttachments;
- (void)cancelBackgroundLoad;
- (void)beginBackgroundLoad;
- (void)_downloadCompleted:(id)arg1;
- (id)init;
- (id)initWithAttachments:(id)arg1;
- (void)dealloc;

@end

