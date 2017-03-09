
#!/usr/bin/env python3

import os


def main():
    """
    """
    print("it can't be run as main")
    return


class QuickStatSvn:
    """
    some thing.
    """
    # constant value
    ROOT_DIR_HDR = "../"         # root of the tool env
    CONFIG_DIR_HDR = "config/"
    RESULTS_DIR_HDR = "result/"

    # values
    target_dir = ""        # target dir which is based on ROOT_DIR_HDR
    svn_range = [0, 0]

    @classmethod
    def __origin_dir(cls):
        """
        figure out the original svn path
        :return:
        """
        return cls.ROOT_DIR_HDR + cls.target_dir

    @classmethod
    def __config_dir(cls):
        """
        figure out the full path of config dir
        :return: the full path
        """
        return cls.ROOT_DIR_HDR + cls.CONFIG_DIR_HDR + cls.target_dir

    @classmethod
    def __results_dir(cls):
        """
        figure out the full path of result dir
        :return: the full path
        """
        return cls.ROOT_DIR_HDR + cls.RESULTS_DIR_HDR + cls.target_dir

    @classmethod
    def set_dir(cls, dir_path):
        """
        judge the validation of dir_path, and record the path in RAM
        :param dir_path:
        :return: True - succeed, False - failed
        """
        if type(dir_path) != str:
            print("invalid para type of dir_path({})".format(type(dir_path)))
            return False

        if os.path.exists(cls.ROOT_DIR_HDR + dir_path):
            cls.target_dir = dir_path
            print("config file is set as {}".format(cls.__config_dir()))
            return True
        else:
            print("Invalid svn path {}".format(cls.__origin_dir()))
            return False

    @classmethod
    def generate_config_file(cls):
        # TODO: 无论是否存在已有配置，写入全新配置
        # TODO: （提升）只写入新数据
        os.system("ip addr")


if __name__ == "__main__":
    main()
