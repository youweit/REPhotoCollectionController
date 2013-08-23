//
//  ThumbnailView.h
//  REPhotoCollectionControllerExample
//
//  Created by Roman Efimov on 7/27/12.
//  Copyright (c) 2012 Roman Efimov. All rights reserved.
//

#import "REPhotoThumbnailView.h"
#import "SDWebImage/UIImageView+WebCache.h"

@interface ThumbnailView : REPhotoThumbnailView {
    UIImageView *imageButton;
}

- (void)setPhoto:(NSObject <REPhotoObjectProtocol> *)photo;

@end
